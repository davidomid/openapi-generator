/*
 * ApiConfiguration.h
 * 
 * This class represents a single item of a multipart-formdata request. 
 */

#ifndef ApiConfiguration_H_
#define ApiConfiguration_H_



#include <map>

#include <cpprest/details/basic_types.h> 
#include <cpprest/http_client.h>
namespace io {
namespace swagger {
namespace client {
namespace api {

class  ApiConfiguration
{
public:
    ApiConfiguration();
    virtual ~ApiConfiguration();
    
    web::http::client::http_client_config& getHttpConfig();
    void setHttpConfig( web::http::client::http_client_config& value );
    
    utility::string_t getBaseUrl() const;
    void setBaseUrl( const utility::string_t value );
    
    utility::string_t getUserAgent() const;
    void setUserAgent( const utility::string_t value );
    
    std::map<utility::string_t, utility::string_t>& getDefaultHeaders();
        
    utility::string_t getApiKey( const utility::string_t& prefix) const;
    void setApiKey( const utility::string_t& prefix, const utility::string_t& apiKey );

protected:
    utility::string_t m_BaseUrl;
    std::map<utility::string_t, utility::string_t> m_DefaultHeaders;
    std::map<utility::string_t, utility::string_t> m_ApiKeys;
    web::http::client::http_client_config m_HttpConfig;
    utility::string_t m_UserAgent;    
};

}
}
}
}
#endif /* ApiConfiguration_H_ */