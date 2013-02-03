/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString, NSMutableData, NSURLConnection, NSURL;

@interface NetPreferences : NSObject <NSURLConnectionDelegate> {
    NSString *_UUID;
    NSString *_buildVersion;
    NSURLConnection *_gtBacksideLogoConnection;
    NSMutableData *_gtBacksideLogoData;
    NSURLConnection *_gtButtonLogoConnection;
    NSMutableData *_gtButtonLogoData;
    BOOL _isNetworkReachable;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    NSURL *_serviceURL;
    NSURL *_serviceURLGT;
}

@property(getter=isNetworkReachable) BOOL networkReachable;

+ (id)sharedPreferences;

- (id)UUID;
- (id)_cacheDirectoryPath;
- (id)_stocksAcceptLanguage;
- (id)_stocksCountryCode;
- (id)_stocksUserAgent;
- (id)_urlStringWithHost:(id)arg1;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)backsideLogoURL;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)financeRequestAttributes;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)init;
- (BOOL)isNetworkReachable;
- (id)logoBacksideImage;
- (id)logoButtonImage;
- (BOOL)multipleDataSourcesAllowedForGT;
- (id)newsServiceURLForStock:(id)arg1;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;
- (id)serviceURL;
- (id)serviceURLGT;
- (void)setNetworkReachable:(BOOL)arg1;
- (void)setupLogging;

@end