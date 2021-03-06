#import <CoreData/NSMigrationManager.h>
#import <CoreData/NSSQLConnectionManager.h>
#import <CoreData/NSSQLDefaultConnectionManager.h>
#import <CoreData/NSPersistentStore.h>
#import <CoreData/NSBatchInsertRequest.h>
#import <CoreData/NSBatchInsertResult.h>
#import <CoreData/NSSQLiteStatementCache.h>
#import <CoreData/NSPersistentStoreCache.h>
#import <CoreData/NSPersistentStoreCoordinator.h>
#import <CoreData/PFHistoryAnalyzerDefaultObjectState.h>
#import <CoreData/NSSQLAttributeTrigger.h>
#import <CoreData/NSBatchUpdateRequest.h>
#import <CoreData/NSBatchUpdateResult.h>
#import <CoreData/NSPersistentStoreMap.h>
#import <CoreData/NSPersistentCloudKitContainer.h>
#import <CoreData/_PFRequestExecutor.h>
#import <CoreData/NSPropertyDescription.h>
#import <CoreData/_PFIndexCacheOffset.h>
#import <CoreData/NSFetchedResultsController.h>
#import <CoreData/NSPropertyMapping.h>
#import <CoreData/NSPropertyStoreMapping.h>
#import <CoreData/NSPropertyTransform.h>
#import <CoreData/NSRelationshipDescription.h>
#import <CoreData/NSRelationshipStoreMapping.h>
#import <CoreData/PFCloudKitHistoryAnalyzerOptions.h>
#import <CoreData/NSSaveChangesRequest.h>
#import <CoreData/NSSQLAliasGenerator.h>
#import <CoreData/CDDCloudKitServer.h>
#import <CoreData/NSSQLAttribute.h>
#import <CoreData/NSSQLBindVariable.h>
#import <CoreData/NSCloudKitMirroringFetchRecordsRequest.h>
#import <CoreData/NSCloudKitMirroringFetchRecordsResult.h>
#import <CoreData/NSCKRecordZoneMetadata.h>
#import <CoreData/NSSQLRTreeIndexQueryIntermediate.h>
#import <CoreData/NSSQLColumn.h>
#import <CoreData/NSSQLCompoundWhereIntermediate.h>
#import <CoreData/CDDCloudKitMetadataModel.h>
#import <CoreData/NSSQLConstantValueIntermediate.h>
#import <CoreData/PFCloudKitHistoryAnalyzer.h>
#import <CoreData/NSSQLBatchUpdateRequestContext.h>
#import <CoreData/NSSQLCore.h>
#import <CoreData/_NSSQLCoreConnectionObsever.h>
#import <CoreData/PFCloudKitImporter.h>
#import <CoreData/NSSQLEntity.h>
#import <CoreData/PFCloudKitErrorLog.h>
#import <CoreData/PFCloudKitErrorLogEntry.h>
#import <CoreData/CDDCloudKitMessage.h>
#import <CoreData/NSSQLEntityKey.h>
#import <CoreData/NSSQLExpressionIntermediate.h>
#import <CoreData/NSSQLFetchCountIntermediate.h>
#import <CoreData/PFCloudKitSetupAssistant.h>
#import <CoreData/CDDCloudKitClient.h>
#import <CoreData/NSSQLFetchIntermediate.h>
#import <CoreData/NSSQLForeignEntityKey.h>
#import <CoreData/NSSQLForeignKey.h>
#import <CoreData/NSSQLiteIndexStatisticsRequest.h>
#import <CoreData/NSSQLiteIndexStatisticsResult.h>
#import <CoreData/PFCloudKitImporterZonePurgedWorkItem.h>
#import <CoreData/CDDCloudKitResponse.h>
#import <CoreData/NSSQLForeignKeyIntermediate.h>
#import <CoreData/NSCloudKitMirroringRequestOptions.h>
#import <CoreData/NSSQLBinaryIndex.h>
#import <CoreData/NSSQLFunctionExpressionIntermediate.h>
#import <CoreData/NSSQLGenerator.h>
#import <CoreData/NSSQLIntermediate.h>
#import <CoreData/PFCloudKitMetadataMigrationContext.h>
#import <CoreData/CDDCloudKitServerConfiguration.h>
#import <CoreData/_NSPersistentHistoryToken.h>
#import <CoreData/NSPersistentHistoryToken.h>
#import <CoreData/CDDCloudKitRegistrationMessage.h>
#import <CoreData/NSSQLiteAdapter.h>
#import <CoreData/_PFSQLiteSnapshotWrapper.h>
#import <CoreData/NSSQLiteConnection.h>
#import <CoreData/NSSQLJoinIntermediate.h>
#import <CoreData/NSSQLKeypathExpressionIntermediate.h>
#import <CoreData/NSSQLLimitIntermediate.h>
#import <CoreData/NSSQLManyToMany.h>
#import <CoreData/PFCloudKitImporterFetchRecordsWorkItem.h>
#import <CoreData/PFCloudKitContainerProvider.h>
#import <CoreData/NSPersistentCloudKitContainerEventRequest.h>
#import <CoreData/NSSQLModel.h>
#import <CoreData/NSSQLOffsetIntermediate.h>
#import <CoreData/NSSQLUbiquitizedStoreConnectionManager.h>
#import <CoreData/NSCloudKitMirroringRequestManager.h>
#import <CoreData/PFStoreComparisonCache.h>
#import <CoreData/NSCKHistoryAnalyzerState.h>
#import <CoreData/NSConstraintValidator.h>
#import <CoreData/NSSQLOptLockKey.h>
#import <CoreData/NSCloudKitMirroringDelegateResetRequest.h>
#import <CoreData/PFCloudKitMetadataPurger.h>
#import <CoreData/NSSQLOrderIntermediate.h>
#import <CoreData/_PFFetchPlanHeader.h>
#import <CoreData/NSSQLPredicateAnalyser.h>
#import <CoreData/NSCKMetadataEntry.h>
#import <CoreData/NSCloudKitMirroringRequest.h>
#import <CoreData/NSCloudKitMirroringExportRequest.h>
#import <CoreData/NSCloudKitMirroringImportRequest.h>
#import <CoreData/NSCloudKitMirroringResetZoneRequest.h>
#import <CoreData/NSCloudKitMirroringResetMetadataRequest.h>
#import <CoreData/NSCloudKitMirroringInitializeSchemaRequest.h>
#import <CoreData/NSConstraintCacheKey.h>
#import <CoreData/NSConstraintCache.h>
#import <CoreData/NSSQLPrimaryKey.h>
#import <CoreData/NSSQLProperty.h>
#import <CoreData/NSSQLReadOnlySelectIntermediate.h>
#import <CoreData/NSSQLRelationship.h>
#import <CoreData/NSSQLRow.h>
#import <CoreData/NSSQLObjectFaultRequestContext.h>
#import <CoreData/NSSQLRowCache.h>
#import <CoreData/NSSQLSelectIntermediate.h>
#import <CoreData/NSSQLSimpleWhereIntermediate.h>
#import <CoreData/NSSQLiteStatement.h>
#import <CoreData/PFCloudKitExporter.h>
#import <CoreData/_NSCoreDataInternal.h>
#import <CoreData/NSSQLStoreMappingGenerator.h>
#import <CoreData/NSSQLSubqueryExpressionIntermediatePredicateVisitor.h>
#import <CoreData/NSSQLSubqueryExpressionIntermediate.h>
#import <CoreData/NSSQLToMany.h>
#import <CoreData/_PFModelMap.h>
#import <CoreData/NSSQLToOne.h>
#import <CoreData/NSSQLWhereIntermediate.h>
#import <CoreData/NSStoreMapNode.h>
#import <CoreData/NSStoreMapping.h>
#import <CoreData/NSStoreMappingGenerator.h>
#import <CoreData/NSStoreMigrationPolicy.h>
#import <CoreData/_NS128bitWrapper.h>
#import <CoreData/NSTemporaryObjectID.h>
#import <CoreData/_NSTemporaryObjectID2.h>
#import <CoreData/NSValidationErrorLocalizationPolicy.h>
#import <CoreData/NSMergedPolicyLocalizationPolicy.h>
#import <CoreData/NSManagedImmutableObject.h>
#import <CoreData/NSCKDatabaseMetadata.h>
#import <CoreData/_NSDefaultSectionInfo.h>
#import <CoreData/NSSQLTernaryExpressionIntermediate.h>
#import <CoreData/NSSQLiteInPlaceMigrationManager.h>
#import <CoreData/PFCloudKitMetricsClient.h>
#import <CoreData/PFCloudKitBaseMetric.h>
#import <CoreData/PFCloudKitUnhandledPartialErrorMetric.h>
#import <CoreData/PFCloudKitFatalErrorMetric.h>
#import <CoreData/PFCloudKitSizeMetric.h>
#import <CoreData/PFCloudKitExportedRecordBytesMetric.h>
#import <CoreData/PFCloudKitImportedRecordBytesMetric.h>
#import <CoreData/PFCloudKitFetchedRecordBytesMetric.h>
#import <CoreData/PFCloudKitFetchedAssetBytesMetric.h>
#import <CoreData/_NSSQLEntityMigrationDescription.h>
#import <CoreData/NSSQLUpdateIntermediate.h>
#import <CoreData/NSSQLiteIntarrayTable.h>
#import <CoreData/_NSSQLTableMigrationDescription.h>
#import <CoreData/PFMirroredRelationship.h>
#import <CoreData/PFMirroredManyToManyRelationship.h>
#import <CoreData/PFMirroredManyToManyRelationshipV2.h>
#import <CoreData/PFMirroredOneToManyRelationship.h>
#import <CoreData/PFCloudKitImporterOptions.h>
#import <CoreData/_NSSQLiteStoreMigrator.h>
#import <CoreData/PFCloudKitSerializer.h>
#import <CoreData/NSSQLGroupByIntermediate.h>
#import <CoreData/NSSQLHavingIntermediate.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <CoreData/NSAsynchronousFetchRequest.h>
#import <CoreData/_NSPropertyDescriptionProxy.h>
#import <CoreData/_NSPropertyDescriptionProxy2.h>
#import <CoreData/NSDerivedAttributeDescription.h>
#import <CoreData/_PFVMData.h>
#import <CoreData/_PFEvanescentData.h>
#import <CoreData/_PFEncodedData.h>
#import <CoreData/_PFResultData.h>
#import <CoreData/_PFExternalReferenceData.h>
#import <CoreData/_NSFaultingMutableOrderedSet.h>
#import <CoreData/NSSQLForeignOrderKey.h>
#import <CoreData/PFCloudKitOptionsValidator.h>
#import <CoreData/PFCloudKitImporterZoneDeletedWorkItem.h>
#import <CoreData/_CDSnapshot.h>
#import <CoreData/NSSQLFetchDictionaryCountIntermediate.h>
#import <CoreData/PFCloudKitImportDatabaseContext.h>
#import <CoreData/NSIncrementalStore.h>
#import <CoreData/NSIncrementalStoreNode.h>
#import <CoreData/_NSFaultingMutableOrderedSetMutationMethods.h>
#import <CoreData/PFCloudKitStoreMonitorProvider.h>
#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>
#import <CoreData/_NSProxyWrapperMutableOrderedSet.h>
#import <CoreData/NSSQLLocationAttributeRTreeExtension.h>
#import <CoreData/NSXPCStoreConnectionManager.h>
#import <CoreData/CDDCloudKitScheduledActivity.h>
#import <CoreData/NSPersistentStoreDescription.h>
#import <CoreData/NSSQLKeypathTriggerAttributeExtension.h>
#import <CoreData/PFCloudKitMetadataCache.h>
#import <CoreData/NSSQLIndexIntermediate.h>
#import <CoreData/PFCloudKitExporterOptions.h>
#import <CoreData/NSSQLEntity_DerivedAttributesExtension.h>
#import <CoreData/NSCKImportPendingRelationship.h>
#import <CoreData/NSPersistentContainer.h>
#import <CoreData/PFCloudKitImporterZoneChangedWorkItem.h>
#import <CoreData/NSCloudKitMirroringDelegate.h>
#import <CoreData/NSCloudKitMirroringDelegateWorkBlockContext.h>
#import <CoreData/NSCKExportedObject.h>
#import <CoreData/NSGenerationalRowCache.h>
#import <CoreData/NSSQLIndex.h>
#import <CoreData/PFCloudKitImportRecordsWorkItem.h>
#import <CoreData/NSSQLCorrelationTableUpdateTracker.h>
#import <CoreData/NSCloudKitMirroringDelegateSerializationRequest.h>
#import <CoreData/NSSQLPersistentHistoryChangeRequestContext.h>
#import <CoreData/_PFPersistentHistoryModel.h>
#import <CoreData/_PFPersistentHistoryFetchModel.h>
#import <CoreData/NSSQLCoreDispatchManager.h>
#import <CoreData/NSSQLCountRequestContext.h>
#import <CoreData/NSSQLVariableExpressionIntermediate.h>
#import <CoreData/NSSQLAttributeExtensionFactory.h>
#import <CoreData/NSSQLSavePlan.h>
#import <CoreData/PFCloudKitExportContext.h>
#import <CoreData/NSPersistentCloudKitContainerOptions.h>
#import <CoreData/PFCloudKitStoreComparer.h>
#import <CoreData/NSCKImportOperation.h>
#import <CoreData/NSBatchDeleteRequest.h>
#import <CoreData/NSBatchDeleteResult.h>
#import <CoreData/NSSQLGenerateObjectIDRequestContext.h>
#import <CoreData/NSFetchIndexElementDescription.h>
#import <CoreData/NSXPCSaveRequestContext.h>
#import <CoreData/NSSQLRelationshipFaultRequestContext.h>
#import <CoreData/_PFFreeMapEntry.h>
#import <CoreData/PFCloudKitSchemaGenerator.h>
#import <CoreData/NSCKRecordZoneQuery.h>
#import <CoreData/NSCKRecordZoneQueryPredicateTransformer.h>
#import <CoreData/NSCKRecordZoneQueryCursorTransformer.h>
#import <CoreData/PFCloudKitHistoryAnalyzerContext.h>
#import <CoreData/NSSQLStatementIntermediate.h>
#import <CoreData/NSCKMirroredRelationship.h>
#import <CoreData/NSSQLFetchRequestContext.h>
#import <CoreData/NSSQLXPCFetchRequestContext.h>
#import <CoreData/NSSQLObjectIDSetFetchRequestContext.h>
#import <CoreData/NSSQLSaveChangesRequestContext.h>
#import <CoreData/PFCloudKitMetadataModelMigrator.h>
#import <CoreData/NSSQLiteIndexStatistics.h>
#import <CoreData/NSSQLiteIndexTrackingModel.h>
#import <CoreData/_NSDataFileBackedFuture.h>
#import <CoreData/_NSCloudKitDataFileBackedFuture.h>
#import <CoreData/PFCloudKitStoreMonitor.h>
#import <CoreData/PFCloudKitLogging.h>
#import <CoreData/NSCloudKitMirroringResult.h>
#import <CoreData/CDDCloudKitRegisteredClient.h>
#import <CoreData/PFHistoryAnalyzer.h>
#import <CoreData/NSCloudKitMirroringExportProgressRequest.h>
#import <CoreData/NSCloudKitMirroringExportProgressResult.h>
#import <CoreData/NSCloudKitMirroringDelegateSetupRequest.h>
#import <CoreData/NSCloudKitMirroringDelegateSetupResult.h>
#import <CoreData/PFHistoryAnalyzerContext.h>
#import <CoreData/PFCloudKitThrottledNotificationObserver.h>
#import <CoreData/NSCKExportMetadata.h>
#import <CoreData/NSCloudKitMirroringDelegatePreJazzkonMetadata.h>
#import <CoreData/_PFChangeInfo.h>
#import <CoreData/NSCloudKitMirroringDelegateOptions.h>
#import <CoreData/NSCKExportOperation.h>
#import <CoreData/NSCachingFetchRequest.h>
