/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {

	BOOL _allowsAllCalendars;
	id _defaultSerializedCalendarRepresentation;
	NSArray* _calendarStates;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (nonatomic,retain) id defaultSerializedCalendarRepresentation;              //@synthesize defaultSerializedCalendarRepresentation=_defaultSerializedCalendarRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * calendarStates;                                //@synthesize calendarStates=_calendarStates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) BOOL allowsAllCalendars;                               //@synthesize allowsAllCalendars=_allowsAllCalendars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(id)initWithDefinition:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)clearPossibleStates;
-(BOOL)allowsAllCalendars;
-(id)defaultSerializedCalendarRepresentation;
-(void)setDefaultSerializedCalendarRepresentation:(id)arg1 ;
-(NSArray *)calendarStates;
-(void)setCalendarStates:(NSArray *)arg1 ;
@end

