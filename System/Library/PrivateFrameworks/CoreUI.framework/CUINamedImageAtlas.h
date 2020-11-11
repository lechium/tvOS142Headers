/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSDictionary, NSArray;

@interface CUINamedImageAtlas : CUINamedLookup {

	NSDictionary* _images;
	NSArray* _renditions;
	CFArrayRef _atlasImages;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) NSArray * imageNames; 
@property (nonatomic,readonly) BOOL completeTextureExtrusion; 
-(void)dealloc;
-(double)scale;
-(CGImageRef)image;
-(CFArrayRef)images;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6 ;
-(id)imageWithName:(id)arg1 ;
-(NSArray *)imageNames;
-(BOOL)completeTextureExtrusion;
@end
