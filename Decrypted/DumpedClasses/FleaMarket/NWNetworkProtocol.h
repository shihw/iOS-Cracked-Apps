//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class NWURLConnection;

@interface NWNetworkProtocol : NSURLProtocol
{
    NWURLConnection *_connection;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)setAuthenticationChallengeDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)connection:(id)arg1 nsurlConnection:(id)arg2 willSendRequestForAuthenticationChallenge:(id)arg3;
- (void)connection:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

@end
