#ifndef __XMLPARSER_H__
#define __XMLPARSER_H__

/**
	 *  @file
	 *  Class "clXmlParser" provides the functions to read the XML data.
	 *  @version 1.0
*/
	#include <xercesc/dom/DOM.hpp>
	#include <xercesc/dom/DOMDocument.hpp>
	#include <xercesc/dom/DOMDocumentType.hpp>
	#include <xercesc/dom/DOMElement.hpp>
	#include <xercesc/dom/DOMImplementation.hpp>
	#include <xercesc/dom/DOMImplementationLS.hpp>
	#include <xercesc/dom/DOMNodeIterator.hpp>
	#include <xercesc/dom/DOMNodeList.hpp>
	#include <xercesc/dom/DOMText.hpp>

	#include <xercesc/parsers/XercesDOMParser.hpp>
	#include <xercesc/util/XMLUni.hpp>

	#include <string>
	#include <stdexcept>


class clXmlParser
{
    public:
        clXmlParser();
        virtual ~clXmlParser();
        clXmlParser(const clXmlParser& other);
        clXmlParser& operator=(const clXmlParser& other);

        bool load(const std::string & xmlFile);
    protected:
    private:
};

#endif // __XMLPARSER_H__
