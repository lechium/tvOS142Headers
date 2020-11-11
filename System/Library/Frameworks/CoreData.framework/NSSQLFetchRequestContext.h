/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSString, NSSQLModel, NSSQLEntity, NSFaultHandler, _PFFetchPlanHeader, NSSQLiteStatement, NSMutableSet, NSMutableArray, NSFetchRequest, NSDictionary, NSArray;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {

	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;
	NSSQLModel* _sqlModel;
	NSSQLEntity* _sqlEntity;
	NSFaultHandler* _faultHandler;
	_PFFetchPlanHeader* _fetchPlan;
	NSSQLiteStatement* _statement;
	NSMutableSet* _objectIDsToRegister;
	NSMutableSet* _objectsToAwaken;
	NSMutableArray* _resultFaultsThatWereFired;
	NSSQLFetchRequestContext* _parentContext;
	int _fileProtectionLevel;
	BOOL _isFaultRequest;
	NSFetchRequest* _originalRequest;
	BOOL _shouldUseBatches;
	BOOL _storeIsUbiquitized;
	BOOL _isUsingCachedStatement;
	NSMutableArray* _concurrentFetchingPipelineRows;
	NSDictionary* _prefetchingSubstitutionVariables;

}

@property (nonatomic,readonly) NSSQLFetchRequestContext * parentContext;                   //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * request; 
@property (nonatomic,retain) NSSQLiteStatement * fetchStatement; 
@property (nonatomic,readonly) NSFetchRequest * originalRequest;                           //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,readonly) BOOL storeIsUbiquitized;                                    //@synthesize storeIsUbiquitized=_storeIsUbiquitized - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;                 //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                      //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                      //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
@property (nonatomic,readonly) int fileProtectionLevel;                                    //@synthesize fileProtectionLevel=_fileProtectionLevel - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel;                                      //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntityForFetchRequest;                     //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                              //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) _PFFetchPlanHeader * fetchPlan;                             //@synthesize fetchPlan=_fetchPlan - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDsToRegisterWithContext; 
@property (nonatomic,readonly) NSArray * objectsToAwaken; 
@property (assign,nonatomic) BOOL isFaultRequest;                                          //@synthesize isFaultRequest=_isFaultRequest - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseBatches;                                      //@synthesize shouldUseBatches=_shouldUseBatches - In the implementation block
@property (assign,nonatomic) BOOL isUsingCachedStatement;                                  //@synthesize isUsingCachedStatement=_isUsingCachedStatement - In the implementation block
@property (nonatomic,retain) NSDictionary * prefetchingSubstitutionVariables;              //@synthesize prefetchingSubstitutionVariables=_prefetchingSubstitutionVariables - In the implementation block
@property (nonatomic,retain,readonly) NSArray * faultsThatWereFired;                       //@synthesize resultFaultsThatWereFired=_resultFaultsThatWereFired - In the implementation block
-(void)dealloc;
-(NSFetchRequest *)request;
-(NSFetchRequest *)originalRequest;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(NSFaultHandler *)faultHandler;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(NSString *)fileBackedFuturesDirectory;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(NSSQLiteStatement *)fetchStatement;
-(void)executePrologue;
-(int)fileProtectionLevel;
-(NSString *)externalDataReferencesDirectory;
-(NSString *)externalDataLinksDirectory;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)executeEpilogue;
-(NSSQLFetchRequestContext *)parentContext;
-(void)setPrefetchingSubstitutionVariables:(NSDictionary *)arg1 ;
-(NSDictionary *)prefetchingSubstitutionVariables;
-(NSSQLModel *)sqlModel;
-(_PFFetchPlanHeader *)fetchPlan;
-(BOOL)isUsingCachedStatement;
-(BOOL)storeIsUbiquitized;
-(void)addFaultsThatWereFired:(id)arg1 ;
-(void)setIsFaultRequest:(BOOL)arg1 ;
-(BOOL)shouldUseBatches;
-(id)_createStatement;
-(id)initWithRequest:(id)arg1 connection:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 parentContext:(id)arg5 ;
-(void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2 ;
-(id)cachedStatement;
-(void)cacheStatement:(id)arg1 ;
-(void)_fireFaultsForValue:(id)arg1 ;
-(void)_preparePredicate:(id)arg1 ;
-(NSArray *)objectIDsToRegisterWithContext;
-(void)persistRows:(id)arg1 ;
-(id)createChildContextForNestedFetchRequest:(id)arg1 ;
-(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 ;
-(void)addObjectIDsToRegister:(id)arg1 ;
-(void)addObjectsToAwaken:(id)arg1 ;
-(NSArray *)objectsToAwaken;
-(void)setFetchStatement:(NSSQLiteStatement *)arg1 ;
-(NSSQLEntity *)sqlEntityForFetchRequest;
-(BOOL)isFaultRequest;
-(NSArray *)faultsThatWereFired;
-(void)setIsUsingCachedStatement:(BOOL)arg1 ;
@end

