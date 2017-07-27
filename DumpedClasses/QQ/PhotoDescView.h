//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface PhotoDescView : UIView
{
    NSMutableDictionary *emotionViews_;
    NSMutableArray *drawItems_;
    NSString *text_;
    double _suitableHeight;
    _Bool _isDefaultText;
    _Bool _lazyLoadGif;
    _Bool _isWrapping;
    long long _uin;
    long long _owerUin;
    UIFont *_font;
    UIColor *_textColor;
    double _lineSpace;
    id <PhotoDescViewDelegate> _delegate;
    long long _maxLine;
}

@property(nonatomic) _Bool isWrapping; // @synthesize isWrapping=_isWrapping;
@property(nonatomic) _Bool lazyLoadGif; // @synthesize lazyLoadGif=_lazyLoadGif;
@property(nonatomic) long long maxLine; // @synthesize maxLine=_maxLine;
@property(nonatomic) __weak id <PhotoDescViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long owerUin; // @synthesize owerUin=_owerUin;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)startGIFAnimating;
- (void)handleTouch:(struct CGPoint)arg1 byTouchesBegan:(_Bool)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)suitableHeight;
@property(retain, nonatomic) NSString *text;
- (void)clearEmotions;
- (void)layoutSubviews;
- (_Bool)isTextEmpty;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawEmotion:(id)arg1 itemIndex:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
