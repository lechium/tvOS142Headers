/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSemanticContextServices/TVSCSemanticContext.h>

@class TVSCSemanticObject, NSArray;

@interface TVSCApplicationStateSemanticContext : TVSCSemanticContext {

	TVSCSemanticObject* _mainEntity;
	NSArray* _commands;

}

@property (nonatomic,retain) TVSCSemanticObject * mainEntity;              //@synthesize mainEntity=_mainEntity - In the implementation block
@property (nonatomic,retain) NSArray * commands;                           //@synthesize commands=_commands - In the implementation block
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)linkedDataDictionary;
-(void)setMainEntity:(TVSCSemanticObject *)arg1 ;
-(TVSCSemanticObject *)mainEntity;
@end

