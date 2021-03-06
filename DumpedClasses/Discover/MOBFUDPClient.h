//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface MOBFUDPClient : NSObject
{
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_runLoopSource;
    struct __CFRunLoop *_runloopRef;
    NSThread *_workerThread;
    CDUnknownBlockType _receiveDataHandler;
}

@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(retain, nonatomic) NSThread *workerThread; // @synthesize workerThread=_workerThread;
@property(nonatomic) struct __CFRunLoop *runloopRef; // @synthesize runloopRef=_runloopRef;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
- (void).cxx_destruct;
- (id)addressDataWithString:(id)arg1 port:(unsigned int)arg2;
- (void)setup;
- (void)onReceiveData:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1 toAddress:(id)arg2 andPort:(unsigned int)arg3;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1;
- (id)init;

@end

