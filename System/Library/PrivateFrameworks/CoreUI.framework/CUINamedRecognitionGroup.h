/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CUINamedLookup.h>

@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup {

	NSMutableDictionary* _imageContents;
	NSMutableDictionary* _objectContents;

}
-(void)dealloc;
-(id)recognitionImageWithName:(id)arg1 ;
-(id)recognitionObjectWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4 ;
-(id)namedRecognitionItemList;
-(id)namedRecognitionImageImageList;
-(id)namedRecognitionObjectObjectList;
-(id)recognitionItemsWithName:(id)arg1 ;
@end
