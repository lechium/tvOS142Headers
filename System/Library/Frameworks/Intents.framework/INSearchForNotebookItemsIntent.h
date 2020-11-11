/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForNotebookItemsIntentExport.h>

@class INSpeakableString, NSString, CLPlacemark, INDateComponentsRange;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * title; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,readonly) long long itemType; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) CLPlacemark * location; 
@property (nonatomic,readonly) long long locationSearchType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTime; 
@property (nonatomic,readonly) long long dateSearchType; 
@property (nonatomic,readonly) unsigned long long temporalEventTriggerTypes; 
@property (nonatomic,readonly) long long taskPriority; 
@property (nonatomic,copy,readonly) NSString * notebookItemIdentifier; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@property (assign,nonatomic) BOOL includeAllNoteContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(NSString *)content;
-(id)_metadata;
-(long long)status;
-(INSpeakableString *)title;
-(void)setTitle:(INSpeakableString *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(long long)itemType;
-(CLPlacemark *)location;
-(INSpeakableString *)groupName;
-(void)setGroupName:(INSpeakableString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(void)setLocation:(CLPlacemark *)arg1 ;
-(id)_dictionaryRepresentation;
-(INDateComponentsRange *)dateTime;
-(void)setDateTime:(INDateComponentsRange *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)locationSearchType;
-(void)setLocationSearchType:(long long)arg1 ;
-(long long)dateSearchType;
-(void)setDateSearchType:(long long)arg1 ;
-(unsigned long long)temporalEventTriggerTypes;
-(void)setTemporalEventTriggerTypes:(unsigned long long)arg1 ;
-(long long)taskPriority;
-(void)setTaskPriority:(long long)arg1 ;
-(BOOL)includeAllNoteContents;
-(void)setIncludeAllNoteContents:(BOOL)arg1 ;
-(NSString *)notebookItemIdentifier;
-(void)setNotebookItemIdentifier:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9 ;
@end

