/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterUICore/GameCenterUICore-Structs.h>
@class NSString;

@interface GKImageKey : NSObject {

	NSString* _filePath;
	NSString* _cacheKey;
	NSString* _basename;
	NSString* _imageID;
	CGSize _size;

}

@property (nonatomic,retain) NSString * imageID;                 //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,retain) NSString * basename;                //@synthesize basename=_basename - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
+(id)fileNameWithIdentifierInImageSource:(id)arg1 ;
+(id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)filePath;
-(NSString *)cacheKey;
-(NSString *)imageID;
-(NSString *)basename;
-(void)setBasename:(NSString *)arg1 ;
-(void)setImageID:(NSString *)arg1 ;
@end
