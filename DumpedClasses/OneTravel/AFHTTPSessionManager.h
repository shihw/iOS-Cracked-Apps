//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFURLSessionManager.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFHTTPRequestSerializer<AFURLRequestSerialization>, AFHTTPResponseSerializer<AFURLResponseSerialization>, NSMutableDictionary, NSURL;

@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying>
{
    NSURL *_baseURL;
    AFHTTPRequestSerializer<AFURLRequestSerialization> *_requestSerializer;
}

+ (_Bool)supportsSecureCoding;
+ (id)manager;
+ (void)monitorHookInit;
+ (void)hookClass:(Class)arg1 originalSelector:(SEL)arg2 swizzledSelector:(SEL)arg3;
+ (void)hookInit;
@property(retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)DELETE:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PATCH:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PUT:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)HEAD:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer; // @dynamic responseSerializer;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (id)init;
- (id)monitorHook__dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)ops_isFatalError:(id)arg1;
- (id)ops_POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 autoRetry:(int)arg5 retryInterval:(int)arg6;
- (id)ops_requestUrlWithAutoRetry:(int)arg1 retryInterval:(int)arg2 originalRequestCreator:(CDUnknownBlockType)arg3 originalFailure:(CDUnknownBlockType)arg4 requestId:(id)arg5;
@property(copy) CDUnknownBlockType ops_retryDelayCalcBlock;
- (id)ops_tasksDict;
- (CDUnknownBlockType)__ops_retryDelayCalcBlock;
- (id)__ops_tasksDict;
- (void)setOps_tasksDict:(id)arg1;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 autoRetry:(int)arg5;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 autoRetry:(int)arg5 retryInterval:(int)arg6;
- (id)requestUrlWithAutoRetry:(int)arg1 retryInterval:(int)arg2 originalRequestCreator:(CDUnknownBlockType)arg3 originalFailure:(CDUnknownBlockType)arg4;
- (void)setTimeout:(double)arg1;
- (_Bool)isErrorFatal:(id)arg1;
@property(retain) NSMutableDictionary *tasksDict;
@property(copy) id retryDelayCalcBlock;
- (void)createDelayRetryCalcBlock;
- (void)createTasksDict;
- (id)__retryDelayCalcBlock;
- (id)__tasksDict;
- (id)https__dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

