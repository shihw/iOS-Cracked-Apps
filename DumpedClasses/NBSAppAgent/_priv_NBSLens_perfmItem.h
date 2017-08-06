//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _priv_NBSLens_perfmItem : NSObject
{
    int _REQUEST_METHOD;
    int _RESPONSE_TIME;
    int _DURATION_PAGE_LOAD;
    int _TIME_TO_RESOLVE_DNS;
    int _TIME_TO_CONNECT;
    int _TIME_TO_SSL;
    int _TIME_TO_FETCH_FROM_CACHE;
    int _TIME_TO_FIRST_PACKET;
    int _TIME_TO_LOAD_DOM;
    int _BROWSER_RENDER_TIME;
    int _SERVER_QUEUEING_TIME;
    int _APPLICATION_TIME;
    int _NETWORK_TIME;
    int _FRONTEND_TIME;
    int _JS_ERRORS;
    int _HTTP_STATUS_CODE;
    int _ERROR_CODE;
    int _BYTE_SEND;
    int _BYTE_RECEIVED;
    NSString *_URL;
    NSString *_REQUEST_URL_PARAMS;
    NSString *_APP_DATA;
}

@property(retain) NSString *APP_DATA; // @synthesize APP_DATA=_APP_DATA;
@property int BYTE_RECEIVED; // @synthesize BYTE_RECEIVED=_BYTE_RECEIVED;
@property int BYTE_SEND; // @synthesize BYTE_SEND=_BYTE_SEND;
@property int ERROR_CODE; // @synthesize ERROR_CODE=_ERROR_CODE;
@property int HTTP_STATUS_CODE; // @synthesize HTTP_STATUS_CODE=_HTTP_STATUS_CODE;
@property int JS_ERRORS; // @synthesize JS_ERRORS=_JS_ERRORS;
@property int FRONTEND_TIME; // @synthesize FRONTEND_TIME=_FRONTEND_TIME;
@property int NETWORK_TIME; // @synthesize NETWORK_TIME=_NETWORK_TIME;
@property int APPLICATION_TIME; // @synthesize APPLICATION_TIME=_APPLICATION_TIME;
@property int SERVER_QUEUEING_TIME; // @synthesize SERVER_QUEUEING_TIME=_SERVER_QUEUEING_TIME;
@property int BROWSER_RENDER_TIME; // @synthesize BROWSER_RENDER_TIME=_BROWSER_RENDER_TIME;
@property int TIME_TO_LOAD_DOM; // @synthesize TIME_TO_LOAD_DOM=_TIME_TO_LOAD_DOM;
@property int TIME_TO_FIRST_PACKET; // @synthesize TIME_TO_FIRST_PACKET=_TIME_TO_FIRST_PACKET;
@property int TIME_TO_FETCH_FROM_CACHE; // @synthesize TIME_TO_FETCH_FROM_CACHE=_TIME_TO_FETCH_FROM_CACHE;
@property int TIME_TO_SSL; // @synthesize TIME_TO_SSL=_TIME_TO_SSL;
@property int TIME_TO_CONNECT; // @synthesize TIME_TO_CONNECT=_TIME_TO_CONNECT;
@property int TIME_TO_RESOLVE_DNS; // @synthesize TIME_TO_RESOLVE_DNS=_TIME_TO_RESOLVE_DNS;
@property int DURATION_PAGE_LOAD; // @synthesize DURATION_PAGE_LOAD=_DURATION_PAGE_LOAD;
@property int RESPONSE_TIME; // @synthesize RESPONSE_TIME=_RESPONSE_TIME;
@property int REQUEST_METHOD; // @synthesize REQUEST_METHOD=_REQUEST_METHOD;
@property(retain) NSString *REQUEST_URL_PARAMS; // @synthesize REQUEST_URL_PARAMS=_REQUEST_URL_PARAMS;
@property(retain) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)render;
- (id)init;

@end
