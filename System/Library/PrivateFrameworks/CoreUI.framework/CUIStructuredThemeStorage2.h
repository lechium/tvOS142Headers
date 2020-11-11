/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUIStructuredThemeStorage2
@optional
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(id)themeStore;
-(id)renditionInfoForIdentifier:(unsigned short)arg1;

@required
-(id)localizations;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(id)allImageNames;
-(id)imagesWithName:(id)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(unsigned short)appearanceIdentifierForName:(id)arg1;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1;
-(id)appearances;
-(unsigned short)localizationIdentifierForName:(id)arg1;
-(BOOL)containsLookupForName:(id)arg1;
-(id)mappedAliases;

@end
