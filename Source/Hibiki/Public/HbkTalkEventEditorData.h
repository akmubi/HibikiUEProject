#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkTalkEventEditorActorParam.h"
#include "HbkTalkEventEditorData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkTalkEventEditorData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkTalkEventEditorActorParam> ActorTable;
    
    UHbkTalkEventEditorData();

};

