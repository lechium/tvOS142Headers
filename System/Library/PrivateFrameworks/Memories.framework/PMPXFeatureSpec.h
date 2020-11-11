/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec {

	NSString* _fontName;
	CGSize _size;

}

@property (nonatomic,retain) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) CGSize size;                      //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(id)viewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(id)specForFont:(id)arg1 size:(CGSize)arg2 ;
-(id)verticalExportSpecForFont:(id)arg1 size:(CGSize)arg2 ;
@end

