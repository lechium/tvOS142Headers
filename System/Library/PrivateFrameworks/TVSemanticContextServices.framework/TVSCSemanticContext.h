/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSemanticContextServices/TVSCSemanticObject.h>

@class NSDictionary, NSArray;

@interface TVSCSemanticContext : TVSCSemanticObject {

	NSDictionary* _linkedDataContext;
	NSArray* _actions;

}

@property (nonatomic,retain) NSDictionary * linkedDataContext;              //@synthesize linkedDataContext=_linkedDataContext - In the implementation block
@property (nonatomic,retain) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(id)linkedDataDictionary;
-(NSDictionary *)linkedDataContext;
-(void)setLinkedDataContext:(NSDictionary *)arg1 ;
@end

