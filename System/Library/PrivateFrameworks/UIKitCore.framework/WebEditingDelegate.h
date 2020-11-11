/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WebEditingDelegate <NSObject>
@optional
-(BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(BOOL)arg5;
-(id)undoManagerForWebView:(id)arg1;
-(void)webViewDidBeginEditing:(id)arg1;
-(void)webViewDidChange:(id)arg1;
-(void)webViewDidEndEditing:(id)arg1;
-(void)webViewDidChangeTypingStyle:(id)arg1;
-(void)webViewDidChangeSelection:(id)arg1;
-(BOOL)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
-(BOOL)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;

@end

