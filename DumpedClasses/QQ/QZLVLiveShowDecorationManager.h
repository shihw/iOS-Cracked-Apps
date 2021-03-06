//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface QZLVLiveShowDecorationManager : NSObject
{
    _Bool _hasListened;
    NSString *_downloadURL;
    _Bool _isReady;
    NSMutableArray *_tasks;
    NSString *_localDir;
    NSArray *_generalLikeNames;
    NSArray *_otherLikeNames;
    _Bool _isInActivity;
    id <QZLVLiveShowDecorationManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <QZLVLiveShowDecorationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInActivity; // @synthesize isInActivity=_isInActivity;
- (void).cxx_destruct;
- (id)getImageWithName:(id)arg1;
- (id)otherLikeNames;
- (id)generalLikeNames;
- (id)curOtherLikeNames;
- (id)curGeneralLikeNames;
- (id)filterGeneralLikeNames:(id)arg1;
- (id)innerOhterLikeNames;
- (id)innerGeneralLikeNames;
- (_Bool)isReady;
- (void)clearLocalResource;
- (id)downDir;
- (void)dealloc;
- (id)init;

@end

