/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSDictionary, NSURL, NSData, NSString;

@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate> {

	C3DSceneSourceRef _sceneSource;
	C3DSceneRef _lastLoadedScene;
	NSDictionary* _lastOptions;
	BOOL _sceneLoaded;
	NSDictionary* _sceneSourceOptions;

}

@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneSourceWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneSourceWithData:(id)arg1 options:(id)arg2 ;
+(BOOL)_shouldCacheWithOptions:(id)arg1 ;
+(id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2 ;
+(void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3 ;
+(void)_removeCachedSceneSourceIfNeededForURL:(id)arg1 ;
+(id)sceneTypes;
+(id)sceneFileTypes;
-(NSString *)description;
-(void)dealloc;
-(NSData *)data;
-(id)propertyForKey:(id)arg1 ;
-(NSURL *)url;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)debugQuickLookObject;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(C3DLibraryRef)library;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(C3DSceneRef)_createSceneRefWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)sceneSourceOptions;
-(long long)sceneCount;
-(id)sceneWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(/*^block*/id)arg3 ;
-(id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2 ;
-(BOOL)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 entryObjectConstructor:(/*^block*/id)arg4 ;
-(id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2 ;
-(id)identifiersOfEntriesWithClass:(Class)arg1 ;
-(long long)countOfScenes;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 ;
-(id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)sceneWithOptions:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(C3DSceneSourceRef)sceneSourceRef;
-(id)c3dDataRepresentation;
-(id)entriesPassingTest:(/*^block*/id)arg1 ;
-(id)entryWithID:(id)arg1 withClass:(Class)arg2 ;
-(id)IDsOfEntriesWithClass:(Class)arg1 ;
-(long long)sourceStatus;
-(BOOL)canExportToColladaWithNoDataLoss;
-(id)performConsistencyCheck;
-(id)debugQuickLookData;
@end
