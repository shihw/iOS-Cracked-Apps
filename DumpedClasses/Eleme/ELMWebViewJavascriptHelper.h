//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSMutableArray, NSMutableDictionary;

@interface ELMWebViewJavascriptHelper : NSObject
{
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    CDUnknownBlockType _messageHandler;
    long long _uniqueId;
    NSBundle *_resourceBundle;
    NSMutableDictionary *_javascriptInterfaceMethods;
    id <ELMWebViewJavascriptDelegate> _delegate;
    unsigned long long _numRequestsLoading;
    NSArray *_jsInjectableHosts;
    NSMutableDictionary *_javascriptInterfaces;
}

+ (void)setLogMaxLength:(unsigned long long)arg1;
+ (void)enableLogging;
@property(retain, nonatomic) NSMutableDictionary *javascriptInterfaces; // @synthesize javascriptInterfaces=_javascriptInterfaces;
@property(retain, nonatomic) NSArray *jsInjectableHosts; // @synthesize jsInjectableHosts=_jsInjectableHosts;
@property unsigned long long numRequestsLoading; // @synthesize numRequestsLoading=_numRequestsLoading;
@property id <ELMWebViewJavascriptDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)generateMethodMapForBridges;
- (_Bool)isJSEnableForURL:(id)arg1;
- (id)deserializeMessageJSON:(id)arg1;
- (id)serializeMessage:(id)arg1 pretty:(_Bool)arg2;
- (void)raiseException:(id)arg1 message:(id)arg2;
- (void)log:(id)arg1 json:(id)arg2;
- (id)filterJsonString:(id)arg1;
- (void)evaluateJavascript:(id)arg1;
- (void)dispatchMessage:(struct NSDictionary *)arg1;
- (void)queueMessage:(struct NSDictionary *)arg1;
- (void)callJavascriptInterface:(struct NSDictionary *)arg1;
- (id)methods:(id)arg1 key:(id)arg2;
- (void)injectJavascriptInterfaces:(id)arg1 methods:(id)arg2;
- (id)webViewJavascriptFetchQueyCommand;
- (id)webViewJavascriptCheckCommand;
- (void)dispatchStartUpMessageQueue;
- (void)logUnkownMessage:(id)arg1;
- (_Bool)isCorrectHost:(id)arg1;
- (_Bool)isCorrectProcotocolScheme:(id)arg1;
- (id)injectJavascript;
- (void)flushMessageQueue:(id)arg1;
- (void)dealloc;
- (void)addJavascriptInterface:(id)arg1 withName:(id)arg2;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)reset;
- (id)initWithHandler:(CDUnknownBlockType)arg1 resourceBundle:(id)arg2;

@end

