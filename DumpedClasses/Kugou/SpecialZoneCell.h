//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class KGThemeButton, NetListTagInfo, UILabel;

@interface SpecialZoneCell : UICollectionViewCell
{
    KGThemeButton *_tagImageBtn;
    UILabel *_tagNameLabel;
    NetListTagInfo *_tagInfo;
    id <SpecialZoneCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SpecialZoneCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NetListTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
- (void).cxx_destruct;
- (void)btnClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

