/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/_NSTextRunStorage.h>

@interface _NSTextAttributeStorage : _NSTextRunStorage
-(BOOL)_setAttributes:(id)arg1 forTextRange:(id)arg2 checkForChange:(BOOL)arg3 ;
-(BOOL)setAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(void)enumerateAttributesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_attributesInTextRange:(id)arg1 areEqualToAttributes:(id)arg2 ;
-(BOOL)addAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(BOOL)removeAttribute:(id)arg1 forTextRange:(id)arg2 ;
-(BOOL)setAttributes:(id)arg1 forTextRange:(id)arg2 ;
@end
