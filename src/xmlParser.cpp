
#include "xmlParser.h"

clXmlParser::clXmlParser()
{
    //ctor
}
//---------------------------------------------------------------------------------------
clXmlParser::~clXmlParser()
{
    //dtor
}
//---------------------------------------------------------------------------------------
clXmlParser::clXmlParser(const clXmlParser& other)
{
    //copy ctor
}
//---------------------------------------------------------------------------------------
clXmlParser& clXmlParser::operator=(const clXmlParser& rhs)
{
    if (this == &rhs)
    {
        return *this; // handle self assignment
    }
    //assignment operator
    return *this;
}
//---------------------------------------------------------------------------------------
bool clXmlParser::load(const std::string & xmlFile)
{
    try
    {
        XMLPlatformUtils::Initialize();  // Initialize Xerces infrastructure
    }
    catch( XMLException& e )
    {
        char* message = XMLString::transcode( e.getMessage() );
        cerr << "XML toolkit initialization error: " << message << endl;
        XMLString::release( &message );
    // throw exception here to return ERROR_XERCES_INIT
        return true;
    }


    return true;

}
//---------------------------------------------------------------------------------------
