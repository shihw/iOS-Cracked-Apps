//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONENetCancelableProtocol.h"

@class NSString;

@interface ONENetCancelable : NSObject <ONENetCancelableProtocol>
{
    id _obj;
}

@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

