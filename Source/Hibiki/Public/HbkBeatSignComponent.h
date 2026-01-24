#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BeatSignParam.h"
#include "HbkBeatSignComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBeatSignComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBeatSignParam> BeatSignParamList;
    
public:
    UHbkBeatSignComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetParamMaterial(UMaterialInstanceDynamic* Material, int32 ParamIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatSignEvent(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveBeatSign(int32 ArrayIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FBeatSignParam GetBeatSignParam(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateBeatSign(int32 ArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBeatSign(int32 ArrayIndex);
    
};

