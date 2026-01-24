#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkCostumeComponent.h"
#include "PreviewCostumeApplyPartDelegate.h"
#include "HbkPreviewCostumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPreviewCostumeComponent : public UHbkCostumeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewCostumeApplyPart OnPostApplyPreviewCostume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PreLoadCostumeList;
    
public:
    UHbkPreviewCostumeComponent(const FObjectInitializer& ObjectInitializer);

};

