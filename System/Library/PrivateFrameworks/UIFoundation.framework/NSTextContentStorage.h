/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextContentManager.h>
#import <libobjc.A.dylib/NSTextStorageController.h>

@class NSTextStorage, NSAttributedString, NSCountableTextRange, NSRunStorage, NSStorage, NSString;

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageController> {

	NSAttributedString* _attributedString;
	NSTextStorage* _textStorage;
	NSCountableTextRange* _documentRange;
	NSRunStorage* _indexTable;
	NSStorage* _elements;
	NSRange _cachedRange;
	NSRange _modifiedRange;
	long long _modifiedDocumentLengthDelta;
	NSRange _editedRange;
	long long _editedDelta;
	BOOL _notifyingToFixSelection;
	SCD_Struct_NS42* _activeEnumerationCache;

}

@property (readonly) NSCountableTextRange * documentRange; 
@property (copy) NSAttributedString * attributedString; 
@property (retain) NSTextStorage * textStorage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(NSCountableTextRange *)documentRange;
-(NSAttributedString *)attributedString;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2 ;
-(BOOL)isCountableDataSource;
-(NSTextStorage *)textStorage;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)synchronizeTextLayoutManagers:(/*^block*/id)arg1 ;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2 ;
-(id)adjustedRangeFromRange:(id)arg1 inEditingTextSelection:(BOOL)arg2 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1 ;
-(void)_commonInitialization;
-(void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2 ;
-(void)beginEditingTransaction;
-(void)endEditingTransaction;
-(void)performEditingTransactionForTextStorage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)attributedStringForTextElement:(id)arg1 ;
-(id)textElementForAttributedString:(id)arg1 ;
-(id)attributedStringForTextElements:(id)arg1 ;
-(id)textElementsForAttributedString:(id)arg1 ;
@end

