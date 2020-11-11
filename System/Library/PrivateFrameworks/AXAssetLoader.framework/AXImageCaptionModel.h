/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface AXImageCaptionModel : NSObject {

	NSDictionary* _modelProperties;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * stage; 
@property (nonatomic,readonly) NSString * language; 
-(NSString *)name;
-(id)description;
-(NSString *)version;
-(NSString *)language;
-(NSString *)stage;
-(id)initWithModelProperties:(id)arg1 ;
@end
