//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DiPlacemark : NSObject
{
    NSString *_name;
    NSString *_address;
    struct CLLocationCoordinate2D _coordinate;
    _Bool _isHaveStreetView;
    float _pitchAngle;
    float _yawAngle;
    NSString *_svid;
    NSString *_uid;
}

@property(nonatomic) float yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property(nonatomic) _Bool isHaveStreetView; // @synthesize isHaveStreetView=_isHaveStreetView;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *svid; // @synthesize svid=_svid;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)init;

@end

