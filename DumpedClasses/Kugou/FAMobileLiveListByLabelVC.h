//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAScrollBaseViewController.h"

@class FAMobileLiveClassify, FAMobileLiveListAllView;

@interface FAMobileLiveListByLabelVC : FAScrollBaseViewController
{
    FAMobileLiveClassify *_classify;
    FAMobileLiveListAllView *_listAllView;
}

+ (_Bool)handleOpenURL:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) FAMobileLiveListAllView *listAllView; // @synthesize listAllView=_listAllView;
@property(retain, nonatomic) FAMobileLiveClassify *classify; // @synthesize classify=_classify;
- (void).cxx_destruct;
- (id)getPlayLiveViewSuperView:(id)arg1;
- (struct CGRect)getPlayLiveViewFrame:(id)arg1;
- (id)getLiveItemEntity:(id)arg1;
- (void)viewDidLoad;
- (id)initWithClassify:(id)arg1;

@end

