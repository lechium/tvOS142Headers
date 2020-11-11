/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@class NSArray;

@interface VUIMenuDataSource : NSObject {

	NSArray* _mainMenuItems;
	NSArray* _genreMenuItems;

}

@property (nonatomic,retain) NSArray * mainMenuItems;               //@synthesize mainMenuItems=_mainMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * genreMenuItems;              //@synthesize genreMenuItems=_genreMenuItems - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)mainMenuItems;
-(NSArray *)genreMenuItems;
-(id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2 ;
-(void)setMainMenuItems:(NSArray *)arg1 ;
-(void)setGenreMenuItems:(NSArray *)arg1 ;
@end
