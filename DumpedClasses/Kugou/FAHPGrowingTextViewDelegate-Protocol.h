//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FAHPGrowingTextView, NSString;

@protocol FAHPGrowingTextViewDelegate

@optional
- (_Bool)growingTextViewShouldReturn:(FAHPGrowingTextView *)arg1;
- (void)growingTextViewDidChangeSelection:(FAHPGrowingTextView *)arg1;
- (void)growingTextView:(FAHPGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(FAHPGrowingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(FAHPGrowingTextView *)arg1;
- (_Bool)growingTextView:(FAHPGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidEndEditing:(FAHPGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(FAHPGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldEndEditing:(FAHPGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(FAHPGrowingTextView *)arg1;
@end

