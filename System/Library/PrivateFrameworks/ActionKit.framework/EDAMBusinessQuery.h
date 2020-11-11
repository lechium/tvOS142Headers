/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery : FATObject {

	EDAMNoteFilter* _filter;
	NSNumber* _numExperts;
	NSNumber* _includeNotebooks;
	NSNumber* _includeNotesCounts;

}

@property (nonatomic,retain) EDAMNoteFilter * filter;                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * numExperts;                      //@synthesize numExperts=_numExperts - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotebooks;                //@synthesize includeNotebooks=_includeNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotesCounts;              //@synthesize includeNotesCounts=_includeNotesCounts - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMNoteFilter *)filter;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(NSNumber *)includeNotebooks;
-(void)setIncludeNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)numExperts;
-(void)setNumExperts:(NSNumber *)arg1 ;
-(NSNumber *)includeNotesCounts;
-(void)setIncludeNotesCounts:(NSNumber *)arg1 ;
@end

