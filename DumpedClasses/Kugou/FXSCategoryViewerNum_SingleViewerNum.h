//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSCategoryViewerNum_SingleViewerNum : FXBaseJSONModel
{
    int _viewerNum;
    NSString *_content;
    NSString *_category;
    NSString *_imgPath;
}

@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(nonatomic) int viewerNum; // @synthesize viewerNum=_viewerNum;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

