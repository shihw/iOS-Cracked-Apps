//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QYSpeechRecognizerProtocol <NSObject>
+ (void)requestRecognizerAuth:(void (^)(unsigned long long))arg1;
+ (unsigned long long)authStatus;
@property(nonatomic) double timeout;
- (_Bool)isFinished;
- (void)stopRecognizer;
- (void)startRecognizer:(void (^)(NSString *, NSError *, _Bool))arg1;
@end

