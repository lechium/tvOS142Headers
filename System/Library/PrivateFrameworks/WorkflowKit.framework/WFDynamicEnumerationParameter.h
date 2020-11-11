/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@protocol WFDynamicEnumerationDataSource;
@class NSArray, INObjectCollection, NSError;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INObjectCollection* _possibleStatesCollection;
	id _defaultSerializedRepresentation;
	id<WFDynamicEnumerationDataSource> _dataSource;
	unsigned long long _defaultValueLoadingState;
	unsigned long long _possibleStatesLoadingState;
	NSError* _possibleStatesLoadingError;

}

@property (assign,nonatomic) unsigned long long defaultValueLoadingState;                       //@synthesize defaultValueLoadingState=_defaultValueLoadingState - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;                                        //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) INObjectCollection * possibleStatesCollection;                     //@synthesize possibleStatesCollection=_possibleStatesCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long possibleStatesLoadingState;                   //@synthesize possibleStatesLoadingState=_possibleStatesLoadingState - In the implementation block
@property (nonatomic,readonly) NSError * possibleStatesLoadingError;                            //@synthesize possibleStatesLoadingError=_possibleStatesLoadingError - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicEnumerationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(BOOL)isAsynchronous;
-(id<WFDynamicEnumerationDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicEnumerationDataSource>)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)defaultSerializedRepresentationDidChange;
-(void)reloadPossibleStates;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(NSError *)possibleStatesLoadingError;
-(void)setPossibleStatesCollection:(INObjectCollection *)arg1 ;
-(void)clearPossibleStates;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)loadPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPossibleStatesFromRemoteSource:(id)arg1 ;
-(BOOL)alwaysShowsButton;
-(BOOL)allowsMultipleValues;
-(void)setPossibleStates:(NSArray *)arg1 ;
-(INObjectCollection *)possibleStatesCollection;
-(unsigned long long)defaultValueLoadingState;
-(void)setDefaultValueLoadingState:(unsigned long long)arg1 ;
-(unsigned long long)possibleStatesLoadingState;
@end

