//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTLayOutCellBaseModel.h"

@interface TTLayOutPlainCellBaseModel : TTLayOutCellBaseModel
{
}

- (double)heightForEntityWordViewRegionWithTop:(double)arg1;
- (double)heightForCommentRegionWithTop:(double)arg1;
- (double)heightForAbstractRegionWithTop:(double)arg1;
- (double)heightForArticleInfoRegionWithTop:(double)arg1 containWidth:(double)arg2;
- (double)heightForTitleRegionForPlainCellWithTop:(double)arg1;
- (double)heightForInfoBarTopPadding;
- (double)heightForCellBottomPadding;
- (double)heightForCellTopPadding;
- (void)calculateBottomLineFrame;
- (void)calculateNeedUpdateFrame;

@end

