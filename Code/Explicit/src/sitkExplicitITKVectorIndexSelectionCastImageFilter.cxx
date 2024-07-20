/*=========================================================================
 *
 *  Copyright NumFOCUS
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#define SITK_TEMPLATE_EXPLICIT_EXPLICITITK
#include "sitkExplicitITKVectorIndexSelectionCastImageFilter.h"
#undef SITK_TEMPLATE_EXPLICIT_EXPLICITITK
#include "sitkExplicitITK.h"

template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long long, 2u>, itk::Image<long long, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long long, 3u>, itk::Image<long long, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long long, 2u>,
                                                                            itk::Image<unsigned long long, 2u>>;
template class SITKExplicit_EXPORT itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long long, 3u>,
                                                                            itk::Image<unsigned long long, 3u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT
  itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<unsigned short, 3u>>;
