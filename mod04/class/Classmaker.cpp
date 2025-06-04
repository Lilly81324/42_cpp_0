/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classmaker.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:51:34 by sikunne           #+#    #+#             */
/*   Updated: 2025/06/04 13:51:34 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	get_input( const std::string& msg )
{
	std::string	input;

	std::cout << msg;
	std::getline(std::cin, input);
	return (input);
}

// For Header File

void write_upper( const char *strng, std::ofstream& out )
{
	int i = 0;
	while (strng[i] != '\0')
	{
		if (strng[i] >= 'a' && strng[i] >= 'Z')
			out << (char)(strng[i] - ('a' - 'A'));
		else
			out << (char)(strng[i]);
		i++;
	}
}

void write_attrib( int forced, const std::string& prompt, const std::string& line, std::ofstream& out )
{
	std::string input;

	std::cout << prompt << std::endl;
	input = get_input("Attribute data type and name (Enter for stop): ");
	if (input.length() > 0 || forced == 1)
		out << line << std::endl;
	while (input.length() > 0)
	{
		out << "\t\t" << input;
		if (input[input.length() -1] != ';')
			out << ";";
		out << std::endl;
		input = get_input("Attribute data type and name (Enter for stop): ");
	}

}

void write_security( const std::string& classname, std::ofstream& out )
{
	std::string input;
	write_attrib(0, "Protected Attributes: ", "\tprotected:", out );
	write_attrib(0, "Private Attributes: ", "\tprivate:", out);
	write_attrib(1, "Public Attributes: ", "\tpublic:", out );
	out << "\t\t" << classname << "( void );\n";
	out << "\t\t" << classname << "( Your_Parameters_here );\n";
	out << "\t\t" << classname << "( const " << classname << "& other );\n";
	out << "\t\t" << classname << "&\toperator=( const " << classname << "& other );\n";
	out << "\t\t" << "~" << classname << "( void );\n";
}

void write_header( std::string classname)
{
	std::ofstream out;
	std::string filename;

	filename = classname + ".hpp";
	out.open(filename.c_str(), std::ios::out | std::ios::trunc);
	if (!out.is_open())
	{
		std::cout << "Could not open " << filename <<std::endl;
		return ;
	}
	out << "#ifndef ";
	write_upper(classname.c_str(), out);
	out << "_HPP" << std::endl;
	out << "# define ";
	write_upper(classname.c_str(), out);
	out << "_HPP" << std::endl << std::endl;
	out << "# include <iostream>\n\nclass " << classname << std::endl;
	out << "{" << std::endl;
	write_security(classname, out);
	out << "};" << std::endl << std::endl;
	out << "#endif" << std::endl;
}

// For Class File

void write_class( const std::string& classname)
{
	std::ofstream out;
	std::string filename;

	filename = classname + ".cpp";
	out.open(filename.c_str(), std::ios::out | std::ios::trunc);
	if (!out.is_open())
	{
		std::cout << "Could not open " << filename <<std::endl;
		return ;
	}
	out << "#include \"" << classname << ".hpp\"\n\n";
	out << classname << "::" << classname << "( void )\n";
	out << "{\n\tstd::cout << \"Default " << classname << " Constructor\" << std::endl;\n}\n\n";
	out << classname << "::" << classname << "( Your_Parameters_here )\n";
	out << "{\n\tstd::cout << \"Parameterized " << classname << " Constructor\" << std::endl;\n}\n\n";
	out << classname << "::" << classname << "( const " << classname << "& other )\n";
	out << "{\n\tstd::cout << \"Copy " << classname << " Constructor\" << std::endl;\n}\n\n";
	out << classname << "::~" << classname << "( void )\n";
	out << "{\n\tstd::cout << \"" << classname << " Deconstructor\" << std::endl;\n}\n\n";
	out << classname << "& " << classname << "::operator=( const " << classname << "& other )\n";
	out << "{\n\tstd::cout << \"" << classname << " Assignement Operator\" << std::endl;\n}\n";
}

int main(void)
{
	std::string classname;
	
	classname = get_input("Please enter Classname: ");
	write_header(classname);
write_class(classname);
	
	
	return (0);
}