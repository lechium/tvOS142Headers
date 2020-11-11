/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class Project, AVPlayerItem, MiroBlueprint, MiroPickList, NSSet, NSDictionary;

@interface _TtCC11AutoEditLib18PipelineController14AutoEditOutput : NSObject {

	 project;
	 playerItem;
	 durationRange;
	 duration;
	 maxDuration;
	 maxDurationRange;
	 blueprint;
	 totalAssetCount;
	 downloadErrorCount;
	 picklist;
	 suggestions;
	 freezeRanges;
	 buckets;
	 pickedItemCount;

}

@property (readonly,nonatomic) Project * project; 
@property (readonly,nonatomic) AVPlayerItem * playerItem; 
@property (readonly,nonatomic) double durationRange; 
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) double maxDuration; 
@property (readonly,nonatomic) double maxDurationRange; 
@property (readonly,nonatomic) MiroBlueprint * blueprint; 
@property (readonly,nonatomic) long long totalAssetCount; 
@property (readonly,nonatomic) long long downloadErrorCount; 
@property (readonly,nonatomic) MiroPickList * picklist; 
@property (readonly,nonatomic) NSSet * suggestions; 
@property (readonly,nonatomic) NSDictionary * freezeRanges; 
@property (readonly,nonatomic) Buckets buckets; 
@property (readonly,nonatomic) long long pickedItemCount; 
-(id)init;
-(double)duration;
-(NSSet *)suggestions;
-(Buckets)buckets;
-(double)maxDuration;
-(AVPlayerItem *)playerItem;
-(long long)totalAssetCount;
-(double)durationRange;
-(MiroBlueprint *)blueprint;
-(Project *)project;
-(MiroPickList *)picklist;
-(NSDictionary *)freezeRanges;
-(long long)pickedItemCount;
-(double)maxDurationRange;
-(long long)downloadErrorCount;
@end

