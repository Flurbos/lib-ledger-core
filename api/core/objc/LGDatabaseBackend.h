// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#import <Foundation/Foundation.h>
@class LGDatabaseBackend;


/**Class representing a database */
@interface LGDatabaseBackend : NSObject

/**
 *Set database's user name
 *@param username, string
 *@return DatabaseBackend object, databse with user name set
 */
- (nullable LGDatabaseBackend *)setUsername:(nonnull NSString *)username;

/**
 *Set database's password
 *@param password, string
 *@return DatabaseBackend object, database with password set
 */
- (nullable LGDatabaseBackend *)setPassword:(nonnull NSString *)pwd;

/**
 *Set database's host which storing database
 *@param host, string
 *@return DatabaseBackend object, database with host set
 */
- (nullable LGDatabaseBackend *)setHost:(nonnull NSString *)host;

/**
 *Set database's host's address
 *@param hostAddr, string, host's address
 *@return DatabaseBackend object, database with host's address set
 */
- (nullable LGDatabaseBackend *)setHostAddr:(nonnull NSString *)hostAddr;

/**
 *Set database's port on which it connects to host
 *@param port, string
 *@return DatabaseBackend object, database with port set
 */
- (nullable LGDatabaseBackend *)setPort:(nonnull NSString *)port;

/**
 *Set database's specific options
 *@param opts, string
 *@return DatabaseBackend object, database with options set
 */
- (nullable LGDatabaseBackend *)setOptions:(nonnull NSString *)opts;

/**
 *Set database's mode (SSL) of security interaction of type databse/server
 *@param mode, string
 *@return DatabaseBackend object, database with mode set
 */
- (nullable LGDatabaseBackend *)setSslMode:(nonnull NSString *)mode;

/**
 *Set database's Kerberos name used to secure (authentication) user/databse interaction
 *@param name, string
 *@return DatabaseBackend object, database with Kerberos name set
 */
- (nullable LGDatabaseBackend *)setKerberosName:(nonnull NSString *)name;

/**TODO */
- (nullable LGDatabaseBackend *)setService:(nonnull NSString *)service;

- (nullable LGDatabaseBackend *)setConnectionPoolSize:(int32_t)size;

- (nullable LGDatabaseBackend *)enableQueryLogging:(BOOL)enable;

/**
 *Return database's name
 *@return string
 */
- (nonnull NSString *)getUsername;

/**
 *Return database's password
 *@return string
 */
- (nonnull NSString *)getPassword;

/**
 *Return database's host
 *@return string
 */
- (nonnull NSString *)getHost;

/**
 *Return database's host's address
 *@return string
 */
- (nonnull NSString *)getHostAddr;

/**
 *Return database's port
 *@return string
 */
- (nonnull NSString *)getPort;

/**
 *Return database's options
 *@return string
 */
- (nonnull NSString *)getOptions;

/**
 *Return database's SSL mode
 *@return string
 */
- (nonnull NSString *)getSslMode;

/**
 *Return database's Kerberos name
 *@return string
 */
- (nonnull NSString *)getKerberosName;

/**TODO */
- (nonnull NSString *)getService;

- (int32_t)getConnectionPoolSize;

- (BOOL)isLoggingEnabled;

/**
 *Create an instance of SQLite3 database
 *@return DatabaseBackend object
 */
+ (nullable LGDatabaseBackend *)getSqlite3Backend;

/**
 *Create an instance of PostgreSQL database
 *@return DatabaseBackend object
 */
+ (nullable LGDatabaseBackend *)getPostgreSQLBackend;

@end
