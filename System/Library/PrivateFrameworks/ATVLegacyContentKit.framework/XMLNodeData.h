/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface XMLNodeData : NSObject {

	NSMutableSet* nodeSet;
	id extraData;

}

@property (nonatomic,retain) NSMutableSet * nodeSet; 
@property (nonatomic,retain) id extraData; 
+(void)load;
-(void)dealloc;
-(void)setExtraData:(id)arg1 ;
-(id)extraData;
-(void)setNodeSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)nodeSet;
@end

