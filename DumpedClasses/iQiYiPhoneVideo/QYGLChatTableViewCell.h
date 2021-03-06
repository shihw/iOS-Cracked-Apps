//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QYGLChatModel, UILabel;

@interface QYGLChatTableViewCell : UITableViewCell
{
    QYGLChatModel *_model;
    UILabel *_chatContentLabel;
}

+ (id)p_roomStatusTableViewCellWithReuseIdentifier:(id)arg1;
+ (id)p_publicNoticeTableViewCellWithReuseIdentifier:(id)arg1;
+ (id)p_sendGiftTableViewCellWithReuseIdentifier:(id)arg1;
+ (id)p_normalMessageTableViewCellWithReuseIdentifier:(id)arg1;
+ (id)chatTableViewCellWithReuseIdentifier:(id)arg1;
@property(retain, nonatomic) UILabel *chatContentLabel; // @synthesize chatContentLabel=_chatContentLabel;
@property(retain, nonatomic) QYGLChatModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)p_creatAttrStringWithImage:(id)arg1 withImageBounds:(struct CGRect)arg2;
- (void)p_updateUIWithModel;
- (void)p_updateAnchorChatMessage;
- (void)p_updateHomeChatMessage;
- (void)p_updateNewAdministrator;
- (void)p_updateBannedChatMessage;
- (id)p_creatAttrStringWithGiftImage:(id)arg1;
- (id)p_createAttrStringWithEmoj:(id)arg1;
- (id)p_createAttributedStringWithString:(id)arg1 fontColor:(id)arg2;
- (void)p_loadPicWithUrl:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)p_updateGiftChatMessage;
- (void)p_updateDefaultChatMessage;
- (id)userLevelImage;
- (void)p_updateBarrageChatMessgae;
- (void)p_updateUIWithBaseType;
- (id)p_matchEmojWithString:(id)arg1;
- (_Bool)p_existsEmoji;
- (id)p_fetchEmojiWithName:(id)arg1;
- (void)updateWelcomeSignWithName:(id)arg1;
- (void)updateChatContentWithName:(id)arg1 chatContent:(id)arg2 mutableAttr:(id)arg3;
- (void)p_updateUI;

@end

