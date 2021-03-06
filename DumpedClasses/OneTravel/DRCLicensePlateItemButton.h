//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class DRCLicenceTypeModel, UIImageView, UILabel;

@interface DRCLicensePlateItemButton : UIButton
{
    UILabel *_licenseTitleLabel;
    UILabel *_subLabel;
    UIImageView *_selectImageView;
    DRCLicenceTypeModel *_licenceTypeModel;
}

@property(retain, nonatomic) DRCLicenceTypeModel *licenceTypeModel; // @synthesize licenceTypeModel=_licenceTypeModel;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *licenseTitleLabel; // @synthesize licenseTitleLabel=_licenseTitleLabel;
- (void).cxx_destruct;
- (void)setSelect:(_Bool)arg1;
- (void)setConstraints;
- (id)initWithLicenceTypeModel:(id)arg1;

@end

