#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkRecordTargetType.h"
#include "EHbkRecordType.h"
#include "HbkRSSRecord.h"
#include "TngGameSystem.h"
#include "HbkRSSRecorder.generated.h"

class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkRSSRecorder : public UTngGameSystem {
    GENERATED_BODY()
public:
    UHbkRSSRecorder();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RSSRecorder_AppendRecord(UObject* WorldContextObject, EHbkRecordType Type, int32 kind, EHbkRecordTargetType Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RSSRecorder_AppendDebugRecord(UObject* WorldContextObject, int32 kind);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRSSRecord(int32 RecordId);
    
    UFUNCTION(BlueprintCallable)
    bool GetRSSRecord(int32 RecordId, FHbkRSSRecord& Record);
    
    UFUNCTION(BlueprintCallable)
    static void GetRecordTypeColor(const FHbkRSSRecord& Record, FLinearColor& RecordColor);
    
    UFUNCTION(BlueprintCallable)
    static void GetRecordTextAndColor(const FHbkRSSRecord& Record, FString& RecordText, FLinearColor& RecordColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHbkRSSRecord> GetRecordList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> CreateNewRecordIdList();
    
    UFUNCTION(BlueprintCallable)
    bool AppendDebugRecord(int32 kind);
    
};

