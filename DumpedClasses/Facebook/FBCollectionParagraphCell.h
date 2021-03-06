//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class FBCollectionProfileFieldSection, UILabel;

@interface FBCollectionParagraphCell : FBCollectionAbstractCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    FBCollectionProfileFieldSection *_collectionItem;
}

+ (id)renderEmailStyleText:(id)arg1;
+ (id)renderStringStyleText:(id)arg1;
+ (id)renderTextLinkStyleTextWithLinkURL:(id)arg1 TextLines:(id)arg2;
+ (id)renderPhoneNumberStyleText:(id)arg1;
+ (id)renderGenderStringWithStringsListContent:(id)arg1;
+ (id)retrieveSubtitleFromCollectionItem:(id)arg1;
+ (double)calculateHeightFromTitleText:(id)arg1 subtitleText:(id)arg2 titleLabel:(id)arg3 subtitleLabel:(id)arg4;
+ (double)desiredHeightForCollectionItem:(id)arg1;
+ (double)availableWidth;
@property(retain, nonatomic) FBCollectionProfileFieldSection *collectionItem; // @synthesize collectionItem=_collectionItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)hasCustomBorder;
- (id)initWithReuseIdentifier:(id)arg1 showCustomBorder:(_Bool)arg2;

@end

