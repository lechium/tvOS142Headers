/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class USKToken, USKObjectPath, NSDictionary;

@interface USKObject : NSObject {

	USKToken* _name;
	USKObjectPath* _path;

}

@property (nonatomic,retain,readonly) USKToken * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) USKObjectPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
-(USKToken *)name;
-(USKObjectPath *)path;
-(NSDictionary *)metadata;
@end

