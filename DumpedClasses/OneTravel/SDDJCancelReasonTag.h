//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface SDDJCancelReasonTag : JSONModel
{
    _Bool _checked;
    long long _id;
    NSString<Optional> *_name;
    NSString<Optional> *_reasonExplain;
    long long _scence;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) long long scence; // @synthesize scence=_scence;
@property(copy, nonatomic) NSString<Optional> *reasonExplain; // @synthesize reasonExplain=_reasonExplain;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
