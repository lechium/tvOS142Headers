/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sinfs; 
@property (nonatomic,copy,readonly) NSURL * URL; 
-(NSURL *)URL;
-(NSString *)flavor;
-(NSString *)downloadKey;
-(NSArray *)sinfs;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

